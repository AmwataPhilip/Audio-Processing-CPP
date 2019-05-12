/**
*   Author: Philip Amwata
*   Date Created: 07/05/2019
*/
#include "AudioSample.hpp"

using namespace AMWPHI001;
template <typename vType>
void setArgs(int x, vType y, char *argv[])
{
    std::stringstream ss; // String stream to convert command line arguments to int
    ss << argv[x];
    ss >> y;
    ss.clear();
}
int main(int argc, char *argv[])
{

    using namespace std;

    int sampleRate = 0;        // Samples per second of audio clip
    int bitCount = 0;          // Size in bits of audio clip (8 or 16)
    int numChannels = 0;       // Number of channels in audio clip (Mono, Stereo)
    int position = 0;          // Int for index in argv for optional command line args
    string outputFile = "out"; // Name of file resultant audio clip written to
    string opFlag = "";        // Operation flag for operation to be done on audio clip
    string outputFlag = "";    // Will hold the flag preceeding optional output file name
    string inputFile1 = "";    // Name of first input file
    string inputFile2 = "";    // Name of second input file

    setArgs(2, sampleRate, argv);  // Set sample rate to argv[2]
    setArgs(4, bitCount, argv);    // Set bit count to argv[4]
    setArgs(6, numChannels, argv); // Set number of channels to argv[6]
    setArgs(7, outputFlag, argv);  // Set output flag to argv[7]

    // Check to see if the output flag is correct
    if (outputFlag == "-o")
    {
        setArgs(8, outputFile, argv); // Set output file name to argv[8]
        position = 9;                 // Set index to next index
    }
    else
    {
        position = 7; // Set idex to current index
    }

    setArgs(position, opFlag, argv);
    position++;

    // Code for ops on the audio files
    // ------------------------------------------------------------

    if (opFlag == "-add")
    {
    }
    if (opFlag == "-radd")
    {
    }
    if (opFlag == "-cut")
    {
    }
    if (opFlag == "-cat")
    {
    }
    if (opFlag == "-rev")
    {
    }
    if (opFlag == "-v")
    {
    }
    else
    {
        // Error message if program fails to run
        cout << "Program failed to execute!" << endl;
        cout << "Check README.md for execution instructions." << endl;
        return 1;
    }
}
