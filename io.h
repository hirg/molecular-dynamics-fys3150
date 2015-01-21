#pragma once
#include <fstream>
class System;
using std::ofstream;

class IO
{
private:
    ofstream m_movieFile;
    ofstream m_statisticsFile;
    ofstream m_performanceFile;
    unsigned int m_stateFileIndex;
    char *filename;
public:
    IO();
    ~IO();

    void saveState(System *system);
    void close();

    void writeStatistics(float time, double kineticEnergy, double potentialEnergy, double pressure, double temperature);
    void writePerformance(unsigned int timestep);
    void savePositionsBinary(System *system);
    void savePositionsXYZ(System *system);
};
