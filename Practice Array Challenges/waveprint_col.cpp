#include <iostream>
using namespace std;
int main() {
    int nRow,nCol;
    std::cin >> nRow >> nCol;
    
    int a[nRow][nCol];
    for (int i = 0; i < nRow; i++) {
        for (int j = 0; j < nCol; j++) {
            std::cin >> a[i][j];
        }
    }
    
    for (int j = 0; j < nCol; j++) {
        if(j&1){
            for (int i = nRow-1; i >= 0; i--) {
                std::cout << a[i][j] << ", ";
            }
        }else{
            for (int i = 0; i < nRow; i++) {
                std::cout << a[i][j] << ", ";
            }
        }
    }
    std::cout << "END" << std::endl;
}