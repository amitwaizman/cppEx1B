//
// Created by USER on 06/03/2022.
//
#include "mat.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>


using namespace std;
namespace ariel {
    string mat(int Column, int Row, char a, char b) {
        if(Column%2==0||Row%2==0){
            throw std::out_of_range{"Mat size is always odd"};
        }
        if(Column<0||Row<0){
            throw std::out_of_range{"Must be positive"};
        }
        if(a==' '||b==' '||a=='\r'||b=='\r'||a=='\n'||b=='\n'||a=='\t'||b=='\t'){
            throw std::out_of_range{"Can not contain this char"};
        }
        if(a<' '||b<' '||a>'~'||b>'~'){
            throw std::out_of_range{"Can not contain this char"};
        }
        char c = a;
        char c1 = a;
        char c2 = a;
        char c3 = a;
        int col = Column;
        int row = Row;
        int col1 = Column;
        int row1 = Row;
        int col2 = Column;
        int row2 = Row;
        int col3 = Column;
        int row3 = Row;
        vector<vector<char>>Matrix(Row,vector<char>(Column));
        for (int i = 0;  i < row;  i++) {
            for (int i1 = 0 + i; i1 < col; i1++) {
                if (i1 < col) {
                    Matrix[i][i1] = c;
                }

            }
            col--;
            row--;
            if (i % 2 == 0) { c = b; } else { c = a; }
        }
        for (int i = 0,t=0; t<col1&&i < row1; t++, i++) {
            for (int i1 = 0 + t; i1 < row1; i1++) {
                if (i1 < row1) {
                    Matrix[i1][i] = c1;
                }
            }
            col1--;
            row1--;
            if (i % 2 == 0) { c1 = b; } else { c1 = a; }
        }

        for (int  i = row2 - 1,t=0;t<col2&&i >= 0;t++, i--) {
            for (int i1 = 0 + t; i1 < col2; i1++) {
                if (i1 < col2) {
                    Matrix[i][i1] = c2;
                }
            }
            col2--;
            row2--;
            if (i % 2 == 0) { c2 = b; } else { c2 = a; }
        }

        for (int i = col3 - 1,t=0; t<col3&&i>= 0; t++, i--) {
            for (int i1 = 0 + t; i1 < row3 ; i1++) {
                if (i1 < row3) {
                    Matrix[i1][i] = c3;
                }
            }
            col3--;
            row3--;
            if (i % 2 == 0) { c3 = b; } else { c3 = a; }
        }
        string ans;
        for (int i = 0; i < Row; i++) {
            for (int j = 0; j < Column; j++) {
                ans+=Matrix[i][j];
            }
            ans +='\n';
        }
        return ans;

    }
}
