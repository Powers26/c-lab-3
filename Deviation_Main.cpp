/*
Lium Powers, Computer Scince Lab 3. 09/__/2026
*/

//Import Librariaries for Stream, Math, and Files
#include <iostream>
#include <math.h> 
#include <fstream>

//Declare Functions
float findmean(int num1, int num2, int  num3, int num4);
float finddev(int num1, int num2, int num3, int num4);

//main function Starts
int main()
{
    //define and relate infile to Data.dat file
    std::ifstream infile;
    infile.open("Data.dat");

    //Declare Variables
    int in1, in2, in3, in4;
    int w, x, y, z;


    std::cout << "Enter four integers seperately: " << std::endl;
    std::cin >> w;
    std::cin >> x;
    std::cin >> y;
    std::cin >> z;
    std::cout << "The mean is: " << findmean(w, x, y, z) << std::endl;
    std::cout << "The standard population deviation is: " << finddev(w, x, y, z) << std::endl;

    std::cout << "\nCalculating File info..." << std::endl;

    //Takes values of integers from the Data.dat file and stores them to use
    infile >> in1 >> in2 >> in3 >> in4;
    
    //Declares an output stream for DataOutput.dat and prints the values in the file
    std::ofstream outfile;
    outfile.open("DataOutput.dat");
    outfile << "The numbers within the file are: " << in1 << ", " << in2 << ", " << in3 << ", " << in4 << std::endl;
    outfile << "The mean within the file is: " << findmean(in1, in2, in3, in4) << std::endl;
    outfile << "The standard population deviation within the file is: " << finddev(in1, in2, in3, in4) << std::endl;

    std::cout << "Check the Files for more info..." << std::endl;

    return 0;
}

//Defines findmean, finds the mean/average of 4 integers and casts output to a float
float findmean(int num1, int num2, int num3, int num4)
{
    float mean = float((num1 + num2 + num3 + num4) / 4.0);

    return mean;
}

//Defines finddev, finds the population standard deviation of 4 numbers and casts output as a float
float finddev(int num1, int num2, int num3, int num4)
{
    float tempmean = findmean(num1, num2, num3, num4);

    float dev = float(sqrt((pow(num1 - tempmean, 2) + pow(num2 - tempmean, 2) + pow(num3 - tempmean, 2) + pow(num4 - tempmean, 2)) / 4.0));

    return dev;
}