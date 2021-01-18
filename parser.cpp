#include <fstream>
#include <vector>
#include <string>
#include <iostream>
#include <tuple>

#include "sequenceAlignment.h"
//#ifndef SEQUENCEALIGNMENT_H
//#define SEQUENCEALIGNMENT_H


void printVector(std::vector<std::tuple<std::string, std::string>>vect){

    for(int i = 0; i < vect.size(); i++)
    {
        std::cout << std::get<0>(vect[i]) << std::endl;
        std::cout << std::get<1>(vect[i]) << std::endl;
    }
}

//Return a tuple of the query sequence name and the sequence string given the query file name
//Query file name only contains one sequence
std::tuple<std::string, std::string> createQuerySequence(std::string queryfilename){
    std::ifstream file(queryfilename);
    std::string str;
    std::string sequence;
    std::string name;
    while (std::getline(file, str)) {
        //If str starts with ">", it is the beginning of a new sequence
        if (str.rfind(">", 0) == 0){
            name = str;
            sequence = "";
        }else(
                sequence += str
            );
    }
    //end of file - return tuple of sequence
    return std::make_tuple(name, sequence);
}

//Return a vector of tuples of the query sequence name and the sequence string given the database file name
//Database file name contains multiple sequences
std::vector<std::tuple<std::string, std::string>> createDatabaseSequences(std::string databasefilename){

    std::ifstream file(databasefilename);
    std::string str;
    std::vector<std::tuple<std::string, std::string>> sequences;
    std::string sequence;
    std::string name;
    while (std::getline(file, str)) {
        //If str starts with ">", it is the beginning of a new sequence
        if (str.rfind(">", 0) == 0){
            //push the former string into the vector
            if (sequence.length() > 0) {
                sequences.push_back(std::make_tuple(name, sequence));
            }
            //reset the name and sequence
            name = str;
            sequence = "";
        }else(
                sequence += str
            );
    }
    //end of file - push in the last sequence
    sequences.push_back(std::make_tuple(name, sequence));

    return sequences;
}

int main(int argc, char *argv[]){

    //Initialize command argument variables
    std::string queryfile;
    std::string databasefile;
    std::string scoringmatrix;
    std::string alignment;
    int gappenalty;
    std::string outputfile;

    if (argc != 7 ){
        printf("Usage: ./a.out queryfile databasefile scoringmatrix alignment gappenalty outputfile \n"
               "\t queryfile = file for query sequence \n"
               "\t databasefile = file for database to search query against \n"
               "\t scoringmatrix = 'PAM250' or 'BLOSUM62' \n"
               "\t alignment = 'global' or 'local' \n"
               "\t gappenalty = negative integer gap penalty for misaligned characters \n"
               "\t outputfile = file for output \n"
        );

        //Print entered arguments
        std::cout << "You have entered " << argc << " arguments:" << "\n";

        for (int i = 0; i < argc; ++i)
            std::cout << argv[i] << "\n";

    } else {
        queryfile = argv[1];
        databasefile = argv[2];
        scoringmatrix = argv[3];
        alignment = argv[4];
        gappenalty = std::stoi(argv[5]);
        outputfile = argv[6];
    };

    //Create new output file
    std::ofstream outfile(outputfile);

    //Read files to get sequences
    std::tuple<std::string, std::string> querySequenceInfo = createQuerySequence(queryfile);
    std::vector<std::tuple<std::string, std::string>> databaseVector = createDatabaseSequences(databasefile);

    //Query sequence
    std::string queryName = std::get<0>(querySequenceInfo);
    std::string querySequence = std::get<1>(querySequenceInfo);

    //Write query name to the output file
    outfile << "Searched Sequence Name: " << queryName << std::endl;

    std::string seq_i = "TACGGGCCCGCTAC";
    std::string seq_j = "TAGCCCTATCGGTCA";

    //Iterate through the database sequences
    for(int i = 0; i < databaseVector.size(); i++)
    {
        std::string dbSeqName = std::get<0>(databaseVector[i]);
        std::string dbSequence = std::get<1>(databaseVector[i]);

        //std::cout << std::get<0>(databaseVector[i]) << std::endl;
        //std::cout << std::get<1>(databaseVector[i]) << std::endl;

        if (alignment == "local"){
            std::tuple<int, std::string, std::string> localAlignmentResults = localAlignment(seq_i, seq_j, scoringmatrix, gappenalty);
            //std::tuple<int, std::string, std::string> localAlignmentResults = localAlignment(querySequence, dbSequence, scoringmatrix, gappenalty);

            //Get local alignment results
            int maxScore = std::get<0>(localAlignmentResults);
            std::string queryAligned = std::get<1>(localAlignmentResults);
            std::string dbseqAligned = std::get<2>(localAlignmentResults);

            //Write database sequence name, max local score, and aligned searched sequence, and the aligned database sequence
            outfile << "Database Sequence Name: " << dbSeqName << std::endl;
            outfile << "Max Local Score: " << maxScore << std::endl;
            outfile << "Aligned Search Sequence:   " << queryAligned << std::endl;
            outfile << "Aligned Database Sequence: " << dbseqAligned << std::endl;

        } else{
            std::tuple<int, std::string, std::string> globalAlignmentResults = globalAlignment(seq_i, seq_j, scoringmatrix, gappenalty);
            //std::tuple<int, std::string, std::string> globalAlignmentResults = globalAlignment(querySequence, dbSequence, scoringmatrix, gappenalty);

            //Get global alignment results
            int score = std::get<0>(globalAlignmentResults);
            std::string queryAligned = std::get<1>(globalAlignmentResults);
            std::string dbseqAligned = std::get<2>(globalAlignmentResults);

            //Write database sequence name, global score, and aligned searched sequence, and the aligned database sequence
            outfile << "Database Sequence Name: " << dbSeqName << std::endl;
            outfile << "Global Score: " << score << std::endl;
            outfile << "Aligned Search Sequence:   " << queryAligned << std::endl;
            outfile << "Aligned Database Sequence: " << dbseqAligned << std::endl;
        }
    }

    outfile.close();

    return 0;
}

//#endif