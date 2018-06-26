
#include <iostream>
#include <ctime>
#include <vector>
#include <map>



using namespace std;

template <typename T>
ostream& operator<<(ostream& os, const vector<T> & vec){
    os << '{';
    for(auto a: vec){
        os << a << ',';
    }
    return os << '}';
}

void count_el(vector <int> x){

    for (int i=0;i<9;i++) {
        int count2=1;
        for (int j=i+1;j<10;j++) {
            if (x[i]==x[j]) count2++;
        }
        cout <<"The number " << x[i] << " is repeated " << count2<<" times" << "\n";
    }

}

void count_e2(vector<int> x){

    for (int i = 0; i < x.size(); i++) {
        int count2 = 1;

        if(x[i] == count2)
        for (int j = i + 1; j < x.size(); j++) {
            if (x[i] == x[j]) count2++;

        }
        cout <<"The number " << x[i] << " is repeated " << count2<<" times" << "\n";

    }


}

/**
 *
 * @param x
 */
void count(const std::vector<int>& x, size_t max){
    vector<size_t> counter(max+1);
    for(size_t i{} ; i != x.size(); ++i){
        ++counter[x[i]];
    }
    cout << "Counting done" << endl;

    for(size_t i{} ; i != counter.size() ; ++i){
        cout << i << " comes " << counter[i] << " times" << endl;
    }
}


void count3(vector<int> x){
    cout << "Entry -> connt3() : line " << __LINE__ << endl;
    map<int, size_t> map_c;

    for(size_t i{}; i != x.size() ; ++i){
        ++map_c[x[i]];
    }

    for(auto a: map_c){
        cout << a.first << "=>" << a.second << endl;
    }

}


int main() {
	cout << "Random walk problem" << endl;
	clock_t t_start = clock();

	srand(time(NULL));
    vector<int> x{-1, -2, -3, 1, 1, 2, -2, 3, -3};
    vector<int> x2{5, 5, 5, 5, 1, 2, 3, 1, 1, 2, 2, 3, 3, 8, 41, 4};

//    count_el(x2);
//  count_el(x);
//    count_e2(x2);

//    count(x2, 41);
    count3(x2);
    count3(x);




	cout << "Program completed . Time elapsed " << (clock() - t_start) / double(CLOCKS_PER_SEC) << " sec" << endl;
	return 0;
}