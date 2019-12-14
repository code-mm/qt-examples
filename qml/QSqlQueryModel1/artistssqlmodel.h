#ifndef ARTISTSSQLMODEL_H
#define ARTISTSSQLMODEL_H
#include <QObject>
#include <QSqlQueryModel>

class ArtistsSqlModel : public QSqlQueryModel
{
    Q_OBJECT
public:
    explicit ArtistsSqlModel(QObject *parent);
    void refresh();
    QVariant data(const QModelIndex &index, int role) const;

    QHash<int, QByteArray> roleNames() const;

signals:

public slots:

private:
    const static char* COLUMN_NAMES[];
    const static char* SQL_SELECT;
};

#endif // ARTISTSSQLMODEL_H
