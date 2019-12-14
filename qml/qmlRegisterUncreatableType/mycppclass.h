#include <QObject>
#include <QString>
#include<QColor>

class MyCPPClass : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QColor mycolour READ mycolour WRITE setMycolour NOTIFY mycolourChanged)
    Q_PROPERTY(int num READ num WRITE setNum NOTIFY numChanged)

    Q_ENUMS(NumbersType)

public:
    explicit MyCPPClass(QObject *parent = 0);

    QColor mycolour();
    void setMycolour(QColor clr);

    int num();
    void setNum(int n);

    Q_INVOKABLE QString getClassName();

    enum NumbersType {
        ONE = 1,
        TWO = 2,
        THREE = 3,
        FOUR= 4,
        FIVE = 5,
        SIX = 6,
        SEVEN =7 ,
        EIGHT = 8,
        Nine = 9
    };

signals:
    void mycolourChanged();
    void numChanged();

public slots:

private:
    QColor m_colour;
    int m_num;
};
