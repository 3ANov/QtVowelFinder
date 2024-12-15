#include "vowelfinder.h"

#include <QString>
#include <QRegularExpression>

VowelFinder::VowelFinder() {}

void VowelFinder::splitTextIntoWords(const QString& text) {
    words = text.split(QRegularExpression("[\\s,!.:\\t\\n]+"), Qt::SkipEmptyParts);
}

QString VowelFinder::findWordsStartingWithVowel() {
    QStringList result;
    QString vowels = "AEIOUАЕЁИОУЫЭЮЯaeiouаеёиоуыэюя";
    for (const QString& word : words) {
        if (vowels.contains(word[0])) {
            result.append(word);
        }
    }

    return result.join(" ");
}
