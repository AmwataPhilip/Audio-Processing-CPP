#include "Sampler.h"
#include <iostream>
#include <stdio.h>

using namespace AMWPHI001;

int main(int argc, char **argv)
{
    using namespace std;
    if (argc == 8)
    {
        int sampleRate = (int)argv[2];
        int bitCunt = (int)argv[4];
        int numChannels = (int)argv[6];
        string outputFile = (string)argv[8];
        string opFlag = (string)argv[9];
        string inputFile1 = (string)argv[10];

        return 0;
    }
    else if (argc == 10)
    {
        int sampleRate = (int)argv[2];
        int bitCunt = (int)argv[4];
        int numChannels = (int)argv[6];
        string outputFile = (string)argv[8];
        string opFlag = (string)argv[9];
        string inputFile1 = (string)argv[10];

        return 0;
    }
    else if (argc == 11)
    {
        int sampleRate = (int)argv[2];
        int bitCunt = (int)argv[4];
        int numChannels = (int)argv[6];
        string outputFile = (string)argv[8];
        string opFlag = (string)argv[9];
        string inputFile1 = (string)argv[10];
        string inputFile2 = (string)argv[11];

        return 0;
    }
    else
    {
        cout << "Program failed to execute!" << endl;
        cout << "Check README.md for execution instructions." << endl;
        return 1;
    }
}
