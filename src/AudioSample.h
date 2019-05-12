/**
*   Author: Philip Amwata
*   Date Created: 07/05/2019
*/
#ifndef AUDIO_H
#define AUDIO_H
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
template <typename T, int numChannels = 1>
class Audio
{
private:
    std::vector<T> clip;

public:
    Audio()
    {
    }
    void ReadFile(std::string){};
    void ReadFile(std::string, std::string){};
    void WriteFile(std::string){};
};
template <typename T>
class Audio<T, 2>
{
};

} // Namespace AMWPHI001

#endif // !AUDIO_H
