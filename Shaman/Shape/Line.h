#pragma once

extern int g_size_1 ;
extern int g_color_blue ;
extern int g_size_2 ;
extern int g_color_red ;

void DrawLineBlue(int x1, int y1, int x2, int y2) ;
void DrawLineRed(int x1, int y1, int x2, int y2) ;

#define LINE_COLOR_RED  1
#define LINE_COLOR_BLUE 2

class Line
{
    private :
        int m_color ;
        int m_size ;
    public :
        Line() ;
        Line(int color) ;
        Line(int size, int color) ;
        void Draw(int x1, int y1, int x2, int y2) ;
        void Fill(int x1, int y1, int x2, int y2) ;
        bool SetSize(int size) ;
        int GetSize() ;
} ;
