#ifndef SVGPARSER_H
#define SVGPARSER_H

#include <QMainWindow>
#include <QRegExp>

class SVGParser
{
public:
    SVGParser();
    bool checkRegExp(QRegExp rx);
};

#endif // SVGPARSER_H
