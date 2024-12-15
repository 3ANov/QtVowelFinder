#ifndef VOWELFINDER_H
#define VOWELFINDER_H

#include <QVector>


class VowelFinder
{

public:
    VowelFinder();
    void splitTextIntoWords(const QString& text);
    QString findWordsStartingWithVowel();
private:
    QStringList words;

    QStringList QRegExp(const char *);
};

#endif // VOWELFINDER_H
