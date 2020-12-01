#include "Line.h"

int g_size_1 ;
int g_color_blue = 1 ;

void DrawLineBlue(int x1, int y1, int x2, int y2)
{
    //  g_color_blue
    g_color_red = g_color_blue ;
}

int g_size_2 ;
int g_color_red = 2 ;

void DrawLineRed(int x1, int y1, int x2, int y2)
{
    //  g_color_red
    g_color_blue = g_color_red ;
}

/*
class Line
{
    int m_size ;
    int m_color ;
    Line() ;
    Line(int color) ;
    Line(int size, int color) ;
    void Draw(x1, y1, x2, y2) ;
    void Fill(int x1, int y1, int x2, int y2) ;
} ;
*/

Line::Line()
{
    m_size = 1 ;
    m_color = LINE_COLOR_BLUE ;
}

Line::Line(int color)
{
    m_size = 1 ;
    m_color = color ;
}

Line::Line(int size, int color)
{
    m_size = size ;
    m_color = color ;
}

void Line::Draw(int x1, int y1, int x2, int y2)
{
    //  m_size, m_color

}

void Line::Fill(int x1, int y1, int x2, int y2)
{
    //  m_size, m_color
}

bool Line::SetSize(int size)
{
    if ((size >= 1) && (size <= 5))
    {
        m_size = size ;
        return true ;
    }
    return false ;
}

int Line::GetSize()
{
    return m_size ;
}