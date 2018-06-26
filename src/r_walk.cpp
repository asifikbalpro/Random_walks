//
// Created by Ultron on 04-Nov-17.
//

#include "r_walk.h"
#include<vector>
#include <map>
#include <iostream>

using namespace std;



void test_randomwalk(){
    vector<int> walker_position(1000);	//
    size_t number_of_step = 1000;		//

    int r;
    for (size_t i{}; i != walker_position.size(); ++i){
        for (size_t j{}; j != number_of_step; ++j) {
            r = rand() % 2;
            if (r == 0) {
                ++walker_position[i];
            }
            else {
                --walker_position[i];
            }
        }

    }

    cout << "{";
    for (auto a : walker_position) {
        cout << a << ',';
    }

    cout << "}" << endl;

}
