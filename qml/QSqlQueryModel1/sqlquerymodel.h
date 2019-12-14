#ifndef SQLQUERYMODEL_H
#define SQLQUERYMODEL_H

#include <QSqlQueryModel>

class SqlQueryModel : public QSqlQueryModel
{
    Q_OBJECT

    void generateRoleNames();

public:
    explicit SqlQueryModel(QObject *parent = 0);

    void setQuery(const QString &query, const QSqlDatabase &db = QSqlDatabase());
    void setQuery(const QSqlQuery &query);
    QVariant data(const QModelIndex &index, int role) const;

    virtual QHash<int, QByteArray> roleNames() const;

signals:

public slots:

};

#endif // SQLQUERYMODEL_H
