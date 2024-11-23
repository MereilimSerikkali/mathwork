#include <iostream>
#include "Eigen/Dense"

int main() {
    std::string SOMELINES = "*******************************\n";
    
    int rows, cols;


    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    Eigen::ArrayXXd Y(rows, cols), Z(rows, cols);

    std::cout << "Enter " << rows * cols << " values for Array Y:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> Y(i, j);
        }
    }

    std::cout << "Enter " << rows * cols << " values for Array Z:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> Z(i, j);
        }
    }

    std::cout << "Array Y \n" << Y << std::endl;
    std::cout << "Array Z \n" << Z << std::endl;

    std::cout << "Array elements multiplication: Y * Z\n" << (Y * Z) << std::endl;
    std::cout << SOMELINES << std::endl;

    std::cout << "Array elements subtraction: Y - Z\n" << (Y - Z) << std::endl;
    std::cout << SOMELINES << std::endl;

    std::cout << "Addition of two arrays: Y + Z \n" << (Y + Z) << std::endl;
    std::cout << SOMELINES << std::endl;

    std::cout << "Array elements division: Y / Z \n" << (Y / Z) << std::endl;
    std::cout << SOMELINES << std::endl;


    std::cout << "Array Y squared (element-wise):\n" << (Y * Y) << std::endl;
    std::cout << SOMELINES << std::endl;

    std::cout << "Array Z squared (element-wise):\n" << (Z * Z) << std::endl;

    return 0;
}
