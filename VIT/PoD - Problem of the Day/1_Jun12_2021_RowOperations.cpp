/*
Row Operations in a Matrix
Four row operations are defined in matrix as follows:

1. Add a row (i, c) – where i is the index where insertion should happen and c is the collection of elements that has to be inserted (Index of row of matrix starts from 1).
2. Remove (i) - where i is the index where removal should happen
3. AddUp(i) – Returns sum of elements in the ith row
4. Even(i) – Returns the count of number of even elements in the ith row

This problem can be quickly solved with vector in STL. STL is Standard Template Library that has got generic functions, classes and algorithms.
Matrix can be viewed as vector of vectors

To use vector, add #include<vector>

We can create object and array of objects for vector
size() - Number of elements in a vector can be found
end() - will give reference to one position next to last element in the vector which can be stored in an iterator
iterator for a integer vector can be declared as vector<int>::iterator it
insert(pos, e) – Inserts the element ‘e’ at the given iterator position pos
erase(pos) – erases the element at vector position pos

Algorithms of STL that can be used are:
#include<algorithm> for STL algorithms
counif(i, j, fn) – Function that counts the number of elements from iterator position i to iterator position j when function fn returns true

Input Format:
First line contains the number of rows and columns in matrix, m
Next ‘r’ lines contain the elements of the ith row
Next line contains the value of ‘c’, choice of operation
Next line contains the value of ‘i’ for the operation
For choice 1, next row contains the elements of the new row that is to be inserted

Output Format:
Print the matrix for choice 1 and 2 and print the value returned by functions for choice 3 and 4
While printing matrix, print one row in a line with a space between elements of a row
Note: There is a space at the end of each row
*/


#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector <int>> vr, int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<vr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int row, col, temp;
    cin>>row>>col;
    vector< vector<int> >vr;
    vector <int> vc ;
    
    for(int i=0; i<row; i++){
        vc.clear();
        for(int j=0; j<col; j++){
            cin>>temp;
            vc.push_back(temp);
        }
        vr.push_back(vc);
    }
    
    cin>>temp;
    switch(temp){
        case 1:{
            vc.clear();
            int pos;
            cin>>pos;
            for(int i=0; i<col; i++){
                cin>>temp;
                vc.push_back(temp);
            }
            vr.insert (vr.begin()+pos-1, vc);
            print (vr, row+1, col);
            break;
        }
        case 2:{
            cin>>temp;
            vr.erase(vr.begin()+temp-1);
            print(vr,row-1,col);
            break;
        }
        case 3:{
            cin>>temp;
            int sum = 0;
            for(vector<int>::iterator it = vr[temp-1].begin(); it != vr[temp-1].end(); ++it)
                sum += *it;
            cout<<sum<<endl;
            break;
        }
        case 4:{
            cin>>temp;
            int count = 0;
            for(vector<int>::iterator it = vr[temp-1].begin(); it != vr[temp-1].end(); ++it)
                if(*it%2==0) count+=1;
            cout<<count<<endl;
            break;
        }
    }
}

