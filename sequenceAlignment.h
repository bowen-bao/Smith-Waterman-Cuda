#include <cstdio>
#include <stdlib.h>
#include <map>
#include <tuple>
#include <vector>
#include <string>
#include <iostream>


std::map<std::tuple<char, char>, int> PAM250 = {
        {{'W', 'F'}, 0}, {{'L', 'R'}, -3}, {{'S', 'P'}, 1}, {{'V', 'T'}, 0},
        {{'Q', 'Q'}, 4}, {{'N', 'A'}, 0}, {{'Z', 'Y'}, -4}, {{'W', 'R'}, 2},
        {{'Q', 'A'}, 0}, {{'S', 'D'}, 0}, {{'H', 'H'}, 6}, {{'S', 'H'}, -1},
        {{'H', 'D'}, 1}, {{'L', 'N'}, -3}, {{'W', 'A'}, -6}, {{'Y', 'M'}, -2},
        {{'G', 'R'}, -3}, {{'Y', 'I'}, -1}, {{'Y', 'E'}, -4}, {{'B', 'Y'}, -3},
        {{'Y', 'A'}, -3}, {{'V', 'D'}, -2}, {{'B', 'S'}, 0}, {{'Y', 'Y'}, 10},
        {{'G', 'N'}, 0}, {{'E', 'C'}, -5}, {{'Y', 'Q'}, -4}, {{'Z', 'Z'}, 3},
        {{'V', 'A'}, 0}, {{'C', 'C'}, 12}, {{'M', 'R'}, 0}, {{'V', 'E'}, -2},
        {{'T', 'N'}, 0}, {{'P', 'P'}, 6}, {{'V', 'I'}, 4}, {{'V', 'S'}, -1},
        {{'Z', 'P'}, 0}, {{'V', 'M'}, 2}, {{'T', 'F'}, -3}, {{'V', 'Q'}, -2},
        {{'K', 'K'}, 5}, {{'P', 'D'}, -1}, {{'I', 'H'}, -2}, {{'I', 'D'}, -2},
        {{'T', 'R'}, -1}, {{'P', 'L'}, -3}, {{'K', 'G'}, -2}, {{'M', 'N'}, -2},
        {{'P', 'H'}, 0}, {{'F', 'Q'}, -5}, {{'Z', 'G'}, 0}, {{'X', 'L'}, -1},
        {{'T', 'M'}, -1}, {{'Z', 'C'}, -5}, {{'X', 'H'}, -1}, {{'D', 'R'}, -1},
        {{'B', 'W'}, -5}, {{'X', 'D'}, -1}, {{'Z', 'K'}, 0}, {{'F', 'A'}, -3},
        {{'Z', 'W'}, -6}, {{'F', 'E'}, -5}, {{'D', 'N'}, 2}, {{'B', 'K'}, 1},
        {{'X', 'X'}, -1}, {{'F', 'I'}, 1}, {{'B', 'G'}, 0}, {{'X', 'T'}, 0},
        {{'F', 'M'}, 0}, {{'B', 'C'}, -4}, {{'Z', 'I'}, -2}, {{'Z', 'V'}, -2},
        {{'S', 'S'}, 2}, {{'L', 'Q'}, -2}, {{'W', 'E'}, -7}, {{'Q', 'R'}, 1},
        {{'N', 'N'}, 2}, {{'W', 'M'}, -4}, {{'Q', 'C'}, -5}, {{'W', 'I'}, -5},
        {{'S', 'C'}, 0}, {{'L', 'A'}, -2}, {{'S', 'G'}, 1}, {{'L', 'E'}, -3},
        {{'W', 'Q'}, -5}, {{'H', 'G'}, -2}, {{'S', 'K'}, 0}, {{'Q', 'N'}, 1},
        {{'N', 'R'}, 0}, {{'H', 'C'}, -3}, {{'Y', 'N'}, -2}, {{'G', 'Q'}, -1},
        {{'Y', 'F'}, 7}, {{'C', 'A'}, -2}, {{'V', 'L'}, 2}, {{'G', 'E'}, 0},
        {{'G', 'A'}, 1}, {{'K', 'R'}, 3}, {{'E', 'D'}, 3}, {{'Y', 'R'}, -4},
        {{'M', 'Q'}, -1}, {{'T', 'I'}, 0}, {{'C', 'D'}, -5}, {{'V', 'F'}, -1},
        {{'T', 'A'}, 1}, {{'T', 'P'}, 0}, {{'B', 'P'}, -1}, {{'T', 'E'}, 0},
        {{'V', 'N'}, -2}, {{'P', 'G'}, 0}, {{'M', 'A'}, -1}, {{'K', 'H'}, 0},
        {{'V', 'R'}, -2}, {{'P', 'C'}, -3}, {{'M', 'E'}, -2}, {{'K', 'L'}, -3},
        {{'V', 'V'}, 4}, {{'M', 'I'}, 2}, {{'T', 'Q'}, -1}, {{'I', 'G'}, -3},
        {{'P', 'K'}, -1}, {{'M', 'M'}, 6}, {{'K', 'D'}, 0}, {{'I', 'C'}, -2},
        {{'Z', 'D'}, 3}, {{'F', 'R'}, -4}, {{'X', 'K'}, -1}, {{'Q', 'D'}, 2},
        {{'X', 'G'}, -1}, {{'Z', 'L'}, -3}, {{'X', 'C'}, -3}, {{'Z', 'H'}, 2},
        {{'B', 'L'}, -3}, {{'B', 'H'}, 1}, {{'F', 'F'}, 9}, {{'X', 'W'}, -4},
        {{'B', 'D'}, 3}, {{'D', 'A'}, 0}, {{'S', 'L'}, -3}, {{'X', 'S'}, 0},
        {{'F', 'N'}, -3}, {{'S', 'R'}, 0}, {{'W', 'D'}, -7}, {{'V', 'Y'}, -2},
        {{'W', 'L'}, -2}, {{'H', 'R'}, 2}, {{'W', 'H'}, -3}, {{'H', 'N'}, 2},
        {{'W', 'T'}, -5}, {{'T', 'T'}, 3}, {{'S', 'F'}, -3}, {{'W', 'P'}, -6},
        {{'L', 'D'}, -4}, {{'B', 'I'}, -2}, {{'L', 'H'}, -2}, {{'S', 'N'}, 1},
        {{'B', 'T'}, 0}, {{'L', 'L'}, 6}, {{'Y', 'K'}, -4}, {{'E', 'Q'}, 2},
        {{'Y', 'G'}, -5}, {{'Z', 'S'}, 0}, {{'Y', 'C'}, 0}, {{'G', 'D'}, 1},
        {{'B', 'V'}, -2}, {{'E', 'A'}, 0}, {{'Y', 'W'}, 0}, {{'E', 'E'}, 4},
        {{'Y', 'S'}, -3}, {{'C', 'N'}, -4}, {{'V', 'C'}, -2}, {{'T', 'H'}, -1},
        {{'P', 'R'}, 0}, {{'V', 'G'}, -1}, {{'T', 'L'}, -2}, {{'V', 'K'}, -2},
        {{'K', 'Q'}, 1}, {{'R', 'A'}, -2}, {{'I', 'R'}, -2}, {{'T', 'D'}, 0},
        {{'P', 'F'}, -5}, {{'I', 'N'}, -2}, {{'K', 'I'}, -2}, {{'M', 'D'}, -3},
        {{'V', 'W'}, -6}, {{'W', 'W'}, 17}, {{'M', 'H'}, -2}, {{'P', 'N'}, 0},
        {{'K', 'A'}, -1}, {{'M', 'L'}, 4}, {{'K', 'E'}, 0}, {{'Z', 'E'}, 3},
        {{'X', 'N'}, 0}, {{'Z', 'A'}, 0}, {{'Z', 'M'}, -2}, {{'X', 'F'}, -2},
        {{'K', 'C'}, -5}, {{'B', 'Q'}, 1}, {{'X', 'B'}, -1}, {{'B', 'M'}, -2},
        {{'F', 'C'}, -4}, {{'Z', 'Q'}, 3}, {{'X', 'Z'}, -1}, {{'F', 'G'}, -5},
        {{'B', 'E'}, 3}, {{'X', 'V'}, -1}, {{'F', 'K'}, -5}, {{'B', 'A'}, 0},
        {{'X', 'R'}, -1}, {{'D', 'D'}, 4}, {{'W', 'G'}, -7}, {{'Z', 'F'}, -5},
        {{'S', 'Q'}, -1}, {{'W', 'C'}, -8}, {{'W', 'K'}, -3}, {{'H', 'Q'}, 3},
        {{'L', 'C'}, -6}, {{'W', 'N'}, -4}, {{'S', 'A'}, 1}, {{'L', 'G'}, -4},
        {{'W', 'S'}, -2}, {{'S', 'E'}, 0}, {{'H', 'E'}, 1}, {{'S', 'I'}, -1},
        {{'H', 'A'}, -1}, {{'S', 'M'}, -2}, {{'Y', 'L'}, -1}, {{'Y', 'H'}, 0},
        {{'Y', 'D'}, -4}, {{'E', 'R'}, -1}, {{'X', 'P'}, -1}, {{'G', 'G'}, 5},
        {{'G', 'C'}, -3}, {{'E', 'N'}, 1}, {{'Y', 'T'}, -3}, {{'Y', 'P'}, -5},
        {{'T', 'K'}, 0}, {{'A', 'A'}, 2}, {{'P', 'Q'}, 0}, {{'T', 'C'}, -2},
        {{'V', 'H'}, -2}, {{'T', 'G'}, 0}, {{'I', 'Q'}, -2}, {{'Z', 'T'}, -1},
        {{'C', 'R'}, -4}, {{'V', 'P'}, -1}, {{'P', 'E'}, -1}, {{'M', 'C'}, -5},
        {{'K', 'N'}, 1}, {{'I', 'I'}, 5}, {{'P', 'A'}, 1}, {{'M', 'G'}, -3},
        {{'T', 'S'}, 1}, {{'I', 'E'}, -2}, {{'P', 'M'}, -2}, {{'M', 'K'}, 0},
        {{'I', 'A'}, -1}, {{'P', 'I'}, -2}, {{'R', 'R'}, 6}, {{'X', 'M'}, -1},
        {{'L', 'I'}, 2}, {{'X', 'I'}, -1}, {{'Z', 'B'}, 2}, {{'X', 'E'}, -1},
        {{'Z', 'N'}, 1}, {{'X', 'A'}, 0}, {{'B', 'R'}, -1}, {{'B', 'N'}, 2},
        {{'F', 'D'}, -6}, {{'X', 'Y'}, -2}, {{'Z', 'R'}, 0}, {{'F', 'H'}, -2},
        {{'B', 'F'}, -4}, {{'F', 'L'}, 2}, {{'X', 'Q'}, -1}, {{'B', 'B'}, 3}
};

std::map<std::tuple<char, char>, int> BLOSUM62 = {
        {{'W', 'F'}, 1}, {{'L', 'R'}, -2}, {{'S', 'P'}, -1}, {{'V', 'T'}, 0},
        {{'Q', 'Q'}, 5}, {{'N', 'A'}, -2}, {{'Z', 'Y'}, -2}, {{'W', 'R'}, -3},
        {{'Q', 'A'}, -1}, {{'S', 'D'}, 0}, {{'H', 'H'}, 8}, {{'S', 'H'}, -1},
        {{'H', 'D'}, -1}, {{'L', 'N'}, -3}, {{'W', 'A'}, -3}, {{'Y', 'M'}, -1},
        {{'G', 'R'}, -2}, {{'Y', 'I'}, -1}, {{'Y', 'E'}, -2}, {{'B', 'Y'}, -3},
        {{'Y', 'A'}, -2}, {{'V', 'D'}, -3}, {{'B', 'S'}, 0}, {{'Y', 'Y'}, 7},
        {{'G', 'N'}, 0}, {{'E', 'C'}, -4}, {{'Y', 'Q'}, -1}, {{'Z', 'Z'}, 4},
        {{'V', 'A'}, 0}, {{'C', 'C'}, 9}, {{'M', 'R'}, -1}, {{'V', 'E'}, -2},
        {{'T', 'N'}, 0}, {{'P', 'P'}, 7}, {{'V', 'I'}, 3}, {{'V', 'S'}, -2},
        {{'Z', 'P'}, -1}, {{'V', 'M'}, 1}, {{'T', 'F'}, -2}, {{'V', 'Q'}, -2},
        {{'K', 'K'}, 5}, {{'P', 'D'}, -1}, {{'I', 'H'}, -3}, {{'I', 'D'}, -3},
        {{'T', 'R'}, -1}, {{'P', 'L'}, -3}, {{'K', 'G'}, -2}, {{'M', 'N'}, -2},
        {{'P', 'H'}, -2}, {{'F', 'Q'}, -3}, {{'Z', 'G'}, -2}, {{'X', 'L'}, -1},
        {{'T', 'M'}, -1}, {{'Z', 'C'}, -3}, {{'X', 'H'}, -1}, {{'D', 'R'}, -2},
        {{'B', 'W'}, -4}, {{'X', 'D'}, -1}, {{'Z', 'K'}, 1}, {{'F', 'A'}, -2},
        {{'Z', 'W'}, -3}, {{'F', 'E'}, -3}, {{'D', 'N'}, 1}, {{'B', 'K'}, 0},
        {{'X', 'X'}, -1}, {{'F', 'I'}, 0}, {{'B', 'G'}, -1}, {{'X', 'T'}, 0},
        {{'F', 'M'}, 0}, {{'B', 'C'}, -3}, {{'Z', 'I'}, -3}, {{'Z', 'V'}, -2},
        {{'S', 'S'}, 4}, {{'L', 'Q'}, -2}, {{'W', 'E'}, -3}, {{'Q', 'R'}, 1},
        {{'N', 'N'}, 6}, {{'W', 'M'}, -1}, {{'Q', 'C'}, -3}, {{'W', 'I'}, -3},
        {{'S', 'C'}, -1}, {{'L', 'A'}, -1}, {{'S', 'G'}, 0}, {{'L', 'E'}, -3},
        {{'W', 'Q'}, -2}, {{'H', 'G'}, -2}, {{'S', 'K'}, 0}, {{'Q', 'N'}, 0},
        {{'N', 'R'}, 0}, {{'H', 'C'}, -3}, {{'Y', 'N'}, -2}, {{'G', 'Q'}, -2},
        {{'Y', 'F'}, 3}, {{'C', 'A'}, 0}, {{'V', 'L'}, 1}, {{'G', 'E'}, -2},
        {{'G', 'A'}, 0}, {{'K', 'R'}, 2}, {{'E', 'D'}, 2}, {{'Y', 'R'}, -2},
        {{'M', 'Q'}, 0}, {{'T', 'I'}, -1}, {{'C', 'D'}, -3}, {{'V', 'F'}, -1},
        {{'T', 'A'}, 0}, {{'T', 'P'}, -1}, {{'B', 'P'}, -2}, {{'T', 'E'}, -1},
        {{'V', 'N'}, -3}, {{'P', 'G'}, -2}, {{'M', 'A'}, -1}, {{'K', 'H'}, -1},
        {{'V', 'R'}, -3}, {{'P', 'C'}, -3}, {{'M', 'E'}, -2}, {{'K', 'L'}, -2},
        {{'V', 'V'}, 4}, {{'M', 'I'}, 1}, {{'T', 'Q'}, -1}, {{'I', 'G'}, -4},
        {{'P', 'K'}, -1}, {{'M', 'M'}, 5}, {{'K', 'D'}, -1}, {{'I', 'C'}, -1},
        {{'Z', 'D'}, 1}, {{'F', 'R'}, -3}, {{'X', 'K'}, -1}, {{'Q', 'D'}, 0},
        {{'X', 'G'}, -1}, {{'Z', 'L'}, -3}, {{'X', 'C'}, -2}, {{'Z', 'H'}, 0},
        {{'B', 'L'}, -4}, {{'B', 'H'}, 0}, {{'F', 'F'}, 6}, {{'X', 'W'}, -2},
        {{'B', 'D'}, 4}, {{'D', 'A'}, -2}, {{'S', 'L'}, -2}, {{'X', 'S'}, 0},
        {{'F', 'N'}, -3}, {{'S', 'R'}, -1}, {{'W', 'D'}, -4}, {{'V', 'Y'}, -1},
        {{'W', 'L'}, -2}, {{'H', 'R'}, 0}, {{'W', 'H'}, -2}, {{'H', 'N'}, 1},
        {{'W', 'T'}, -2}, {{'T', 'T'}, 5}, {{'S', 'F'}, -2}, {{'W', 'P'}, -4},
        {{'L', 'D'}, -4}, {{'B', 'I'}, -3}, {{'L', 'H'}, -3}, {{'S', 'N'}, 1},
        {{'B', 'T'}, -1}, {{'L', 'L'}, 4}, {{'Y', 'K'}, -2}, {{'E', 'Q'}, 2},
        {{'Y', 'G'}, -3}, {{'Z', 'S'}, 0}, {{'Y', 'C'}, -2}, {{'G', 'D'}, -1},
        {{'B', 'V'}, -3}, {{'E', 'A'}, -1}, {{'Y', 'W'}, 2}, {{'E', 'E'}, 5},
        {{'Y', 'S'}, -2}, {{'C', 'N'}, -3}, {{'V', 'C'}, -1}, {{'T', 'H'}, -2},
        {{'P', 'R'}, -2}, {{'V', 'G'}, -3}, {{'T', 'L'}, -1}, {{'V', 'K'}, -2},
        {{'K', 'Q'}, 1}, {{'R', 'A'}, -1}, {{'I', 'R'}, -3}, {{'T', 'D'}, -1},
        {{'P', 'F'}, -4}, {{'I', 'N'}, -3}, {{'K', 'I'}, -3}, {{'M', 'D'}, -3},
        {{'V', 'W'}, -3}, {{'W', 'W'}, 11}, {{'M', 'H'}, -2}, {{'P', 'N'}, -2},
        {{'K', 'A'}, -1}, {{'M', 'L'}, 2}, {{'K', 'E'}, 1}, {{'Z', 'E'}, 4},
        {{'X', 'N'}, -1}, {{'Z', 'A'}, -1}, {{'Z', 'M'}, -1}, {{'X', 'F'}, -1},
        {{'K', 'C'}, -3}, {{'B', 'Q'}, 0}, {{'X', 'B'}, -1}, {{'B', 'M'}, -3},
        {{'F', 'C'}, -2}, {{'Z', 'Q'}, 3}, {{'X', 'Z'}, -1}, {{'F', 'G'}, -3},
        {{'B', 'E'}, 1}, {{'X', 'V'}, -1}, {{'F', 'K'}, -3}, {{'B', 'A'}, -2},
        {{'X', 'R'}, -1}, {{'D', 'D'}, 6}, {{'W', 'G'}, -2}, {{'Z', 'F'}, -3},
        {{'S', 'Q'}, 0}, {{'W', 'C'}, -2}, {{'W', 'K'}, -3}, {{'H', 'Q'}, 0},
        {{'L', 'C'}, -1}, {{'W', 'N'}, -4}, {{'S', 'A'}, 1}, {{'L', 'G'}, -4},
        {{'W', 'S'}, -3}, {{'S', 'E'}, 0}, {{'H', 'E'}, 0}, {{'S', 'I'}, -2},
        {{'H', 'A'}, -2}, {{'S', 'M'}, -1}, {{'Y', 'L'}, -1}, {{'Y', 'H'}, 2},
        {{'Y', 'D'}, -3}, {{'E', 'R'}, 0}, {{'X', 'P'}, -2}, {{'G', 'G'}, 6},
        {{'G', 'C'}, -3}, {{'E', 'N'}, 0}, {{'Y', 'T'}, -2}, {{'Y', 'P'}, -3},
        {{'T', 'K'}, -1}, {{'A', 'A'}, 4}, {{'P', 'Q'}, -1}, {{'T', 'C'}, -1},
        {{'V', 'H'}, -3}, {{'T', 'G'}, -2}, {{'I', 'Q'}, -3}, {{'Z', 'T'}, -1},
        {{'C', 'R'}, -3}, {{'V', 'P'}, -2}, {{'P', 'E'}, -1}, {{'M', 'C'}, -1},
        {{'K', 'N'}, 0}, {{'I', 'I'}, 4}, {{'P', 'A'}, -1}, {{'M', 'G'}, -3},
        {{'T', 'S'}, 1}, {{'I', 'E'}, -3}, {{'P', 'M'}, -2}, {{'M', 'K'}, -1},
        {{'I', 'A'}, -1}, {{'P', 'I'}, -3}, {{'R', 'R'}, 5}, {{'X', 'M'}, -1},
        {{'L', 'I'}, 2}, {{'X', 'I'}, -1}, {{'Z', 'B'}, 1}, {{'X', 'E'}, -1},
        {{'Z', 'N'}, 0}, {{'X', 'A'}, 0}, {{'B', 'R'}, -1}, {{'B', 'N'}, 3},
        {{'F', 'D'}, -3}, {{'X', 'Y'}, -1}, {{'Z', 'R'}, 0}, {{'F', 'H'}, -1},
        {{'B', 'F'}, -3}, {{'F', 'L'}, 0}, {{'X', 'Q'}, -1}, {{'B', 'B'}, 4}
};

//Print matrix
template <typename T>
void printMatrix(const std::vector<std::vector<T>>& matrix){
    int R = matrix.size();
    int C = matrix[0].size();

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

//Return the matching similarity score of chars a, b given the score type (BLOSUM62 vs PAM250)
int S(char a, char b, std::string scoreType){
    const auto& scoring = (scoreType == "PAM250") ? PAM250 : BLOSUM62;

    int s = 0;
    if (scoring.count({a,b})){
        s = scoring.find({a,b})->second;
    } else if (scoring.count({b,a})){
        s = scoring.find({b,a})->second;
    }

    return s;
}

// Return the score of that cell and the direction of the previous cell the max score was based off
std::tuple<int, std::string> score_direction(std::vector<std::vector<int>> scoreMatrix, std::string seq_i, std::string seq_j, int i, int j, std::string scoring, int gap){

    //Get the matching similarity score
    int s = S(seq_i[i-1], seq_j[j-1], scoring);

    int northwest = scoreMatrix[i-1][j-1] + s;
    int north = scoreMatrix[i-1][j] + gap;
    int west = scoreMatrix[i][j-1] + gap;

    int score = std::max({northwest, north, west, 0});

    std::string direction = "n/a";
    if (score == northwest){
        direction = "NW";
    } else if (score == north){
        direction = "N";
    } else if (score == west){
        direction = "W";
    }

    return std::make_tuple(score, direction);
}

//Filling in the scoring and direction matrices
void FillMatrix(std::string seq_i, std::string seq_j, std::vector<std::vector<int>>& scoreMatrix, std::vector<std::vector<std::string>>& directionMatrix, std::string scoring, int gap){

    int R = scoreMatrix.size();
    int C = scoreMatrix[0].size();

    for (int i = 1; i < R; i++) {
        for (int j = 1; j < C; j++) {
            //here is where the new edition is
            //std::cout<< seq_i[i] << " " << seq_j[j]<< std::endl;
            std::tuple<int, std::string> cell = score_direction(scoreMatrix, seq_i, seq_j, i, j, scoring, gap);
            scoreMatrix[i][j] = std::get<0>(cell);
            directionMatrix[i][j] = std::get<1>(cell);
        }
    }
}

// Returns the max score in the scoring Matrix and the i, j locations of the cell with the max score
std::tuple<int, int, int> findMaxScore(const std::vector<std::vector<int>>& scoreMatrix){

    int R = scoreMatrix.size();
    int C = scoreMatrix[0].size();

    int location_i = 0;
    int location_j = 0;
    int maxScore = INT_MIN;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (scoreMatrix[i][j] > maxScore){
                maxScore = scoreMatrix[i][j];
                location_i = i;
                location_j = j;
            }
        }
    }
    return std::make_tuple(maxScore, location_i, location_j);
}

//Conduct local alignment backtracking by starting at the cell of the maximum alignment score
//and using the direction matrix to backtrack to the previous cell until the score of the cell is 0
//Returns the two aligned local sequences concluding
std::tuple<std::string, std::string> localBacktrack(std::string seq_i, std::string seq_j, int i, int j, const std::vector<std::vector<int>>& scoreMatrix, const std::vector<std::vector<std::string>>& directionMatrix){

    std::string aligned_seq_i = "";
    std::string aligned_seq_j = "";

    while (scoreMatrix[i][j] > 0){
        if (directionMatrix[i][j] == "NW"){
            aligned_seq_i.insert(0, 1, seq_i[i-1]);
            aligned_seq_j.insert(0, 1, seq_j[j-1]);
            i = i - 1;
            j = j - 1;
        } else if (directionMatrix[i][j] == "N"){
            aligned_seq_i.insert(0, 1, seq_i[i-1]);
            aligned_seq_j.insert(0, 1, '_');
            i = i - 1;
        } else if (directionMatrix[i][j] == "W") {
            aligned_seq_i.insert(0, 1, '_');
            aligned_seq_j.insert(0, 1, seq_j[j-1]);
            j = j - 1;
        };
    };
    return std::make_tuple(aligned_seq_i, aligned_seq_j);
}

//Conduct global alignment backtracking by starting at the cell of the maximum alignment score
//and using the direction matrix to backtrack to the previous cell until the cell is at 0,0
//Returns the two aligned global sequences
std::tuple<std::string, std::string> globalBacktrack(std::string seq_i, std::string seq_j, const std::vector<std::vector<int>>& scoreMatrix, const std::vector<std::vector<std::string>>& directionMatrix){

    int i = scoreMatrix.size() - 1;
    int j = scoreMatrix[0].size() - 1;

    std::string aligned_seq_i = "";
    std::string aligned_seq_j = "";

    while (i > 0 && j > 0){
        if (directionMatrix[i][j] == "NW"){
            aligned_seq_i.insert(0, 1, seq_i[i-1]);
            aligned_seq_j.insert(0, 1, seq_j[j-1]);
            i = i - 1;
            j = j - 1;
        } else if (directionMatrix[i][j] == "N"){
            aligned_seq_i.insert(0, 1, seq_i[i-1]);
            aligned_seq_j.insert(0, 1, '_');
            i = i - 1;
        } else if (directionMatrix[i][j] == "W") {
            aligned_seq_i.insert(0, 1, '_');
            aligned_seq_j.insert(0, 1, seq_j[j-1]);
            j = j - 1;
        };
    };
    return std::make_tuple(aligned_seq_i, aligned_seq_j);
}

//Execute the Smith-Waterman local sequence alignment
//Returns the max score, and the two local sequences
//given the sequences, scoring method (PAM250, BLOSUM62), and
//gap penalty (negative int)
std::tuple<int, std::string, std::string> localAlignment(std::string seq_i, std::string seq_j, std::string scoring, int gap){

    //Get dimensions of matrices
    int rows = seq_i.length() + 1;
    int cols = seq_j.length() + 1;

    //Create empty score and direction matrices with dimensions of sequence lengths
    std::vector<std::vector<int>> scoreMatrix(rows, std::vector<int>(cols, 0));
    std::vector<std::vector<std::string>> directionMatrix(rows, std::vector<std::string>(cols, ""));

    //Fill the score and direction matrices
    FillMatrix(seq_i, seq_j, scoreMatrix, directionMatrix, scoring, gap);

    //Get the max score and locations of cell
    std::tuple<int, int, int> maxScoreInfo = findMaxScore(scoreMatrix);
    int maxScore = std::get<0>(maxScoreInfo);
    int location_i = std::get<1>(maxScoreInfo);
    int location_j = std::get<2>(maxScoreInfo);

    //Backtrack to get the optimal alignment
    std::tuple<std::string, std::string> aligned_seqs = localBacktrack(seq_i, seq_j, location_i, location_j, scoreMatrix, directionMatrix);
    std::string aligned_seq_i = std::get<0>(aligned_seqs);
    std::string aligned_seq_j = std::get<1>(aligned_seqs);

    //std::cout << "max score " << maxScore << std::endl;
    //std::cout << "aligned_seq_i " << aligned_seq_i << std::endl;
    //std::cout << "aligned_seq_j " << aligned_seq_j << std::endl;

    return std::make_tuple(maxScore, aligned_seq_i, aligned_seq_j);
}

//Initiate the first row and first column in the global alignment matrix
//Each cell aside from the cell at 0,0 is the previous + gap (negative int)
void initiateGlobalScoreMatrix(std::vector<std::vector<int>>& scoreMatrix, int gap){

    int R = scoreMatrix.size();
    int C = scoreMatrix[0].size();

    for (int i = 1; i < R; i++) {
        scoreMatrix[i][0] = scoreMatrix[i-1][0] + gap;
    }
    for (int j = 1; j < C; j++) {
        scoreMatrix[0][j] = scoreMatrix[0][j-1] + gap;
    }
}


//Execute the Needleman–Wunsch global sequence alignment
//Returns the score, and the two global sequences
//given the sequences, scoring method (PAM250, BLOSUM62), and
//gap penalty (negative int)
std::tuple<int, std::string, std::string> globalAlignment(std::string seq_i, std::string seq_j, std::string scoring, int gap){

    //Get dimensions of matrices
    int rows = seq_i.length() + 1;
    int cols = seq_j.length() + 1;

    //Create empty score and direction matrices with dimensions of sequence lengths
    std::vector<std::vector<std::string>> directionMatrix(rows, std::vector<std::string>(cols, ""));
    std::vector<std::vector<int>> scoreMatrix(rows, std::vector<int>(cols, 0));

    //Initialize the first column and row of the score matrix using the gap penalty
    initiateGlobalScoreMatrix(scoreMatrix, gap);

    //Fill the score and direction matrices
    FillMatrix(seq_i, seq_j, scoreMatrix, directionMatrix, scoring, gap);

    //Get the last score in the matrix
    int lastScore = scoreMatrix[rows-1][cols-1];
    //std::cout << "last score " << lastScore << std::endl;

    //Backtrack to get the global alignment
    std::tuple<std::string, std::string> aligned_seqs = globalBacktrack(seq_i, seq_j, scoreMatrix, directionMatrix);
    std::string aligned_seq_i = std::get<0>(aligned_seqs);
    std::string aligned_seq_j = std::get<1>(aligned_seqs);

    //std::cout << "aligned_seq_i " << aligned_seq_i << std::endl;
    //std::cout << "aligned_seq_j " << aligned_seq_j << std::endl;

    return std::make_tuple(lastScore, aligned_seq_i, aligned_seq_j);
}


