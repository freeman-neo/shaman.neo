#pragma once

class File
{
    private :
        FILE *m_stream ;
    public :
        FILE *FileOpen(const char *name) ;
        bool FileWriteString(const char *value) ;
        bool FileWriteInt(int value) ;
        bool FileWriteFloat(float value) ;
        bool FileWriteChar(char value) ;
        bool FileWriteBool(bool value) ;
        void FileClose() ;
};

