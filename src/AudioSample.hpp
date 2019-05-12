/**
*   Author: Philip Amwata
*   Date Created: 07/05/2019
*/
#ifndef AUDIOSAMPLE_HPP
#define AUDIOSAMPLE_HPP
#include <fstream>
#include <sstream>
#include <memory>
#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>
#include <cstdint>
namespace AMWPHI001
{
template <typename T, int numChannel>
class AudioSample
{
private:
    std::vector<T> clip;
    int bitCount;
    int numChannels;
    int sampleRate;
    int numberSamples;
    int fileSize;

public:
    // Special Member Functions
    // ---------------------------------------

    // Default constructor
    AudioSample(int sampRate, int bCount) : sampleRate(sampRate), bitCount(bCount), numChannels(numChannel)
    {
    }

    // Copy Constructor
    AudioSample(const AudioSample &rhs) : sampleRate(rhs.sampleRate), bitCount(rhs.bitCount), numChannels(rhs.numChannels), fileSize(rhs.fileSize), numberSamples(rhs.numberSamples)
    {
        clip = rhs.clip;
    }
    // Move Constructor
    AudioSample(AudioSample &&rhs) : sampleRate(rhs.sampleRate), bitCount(rhs.bitCount), numChannels(rhs.numChannels), fileSize(rhs.fileSize), numberSamples(rhs.numberSamples)
    {
        // Move
        this->clip = rhs.clip;

        // Clear after move
        rhs.sampleRate = -1;
        rhs.bitCount = -1;
        rhs.numChannels = -1;
        rhs.numberSamples = -1;
    }

    // Copy Assignment Operator
    AudioSample operator=(const AudioSample &rhs)
    {
        // Deep copy
        sampleRate = rhs.sampleRate;
        bitCount = rhs.bitCount;
        numChannels = rhs.numChannels;
        fileSize = rhs.fileSize;
        numberSamples = rhs.numberSamples;
        clip = rhs.clip;
        return *this;
    }

    // Move Assignment
    AudioSample operator=(AudioSample &&rhs)
    {
        // Deep copy
        sampleRate = rhs.sampleRate;
        bitCount = rhs.bitCount;
        numChannels = rhs.numChannels;
        fileSize = rhs.fileSize;
        numberSamples = rhs.numberSamples;
        clip = rhs.clip;

        // Clear after move
        rhs.sampleRate = -1;
        rhs.bitCount = -1;
        rhs.numChannels = -1;
        rhs.fileSize = -1;
        rhs.numberSamples = -1;

        return *this;
    }

    // Destructor
    ~AudioSample()
    {
    }

    // Reverse using STL
    void reverse()
    {
        std::reverse(clip.begin(), clip.end());
    }
};
}; // Namespace AMWPHI001

#endif // !AUDIOSAMPLE_HPP
