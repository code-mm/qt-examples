#ifndef SQLQUERTMODEL_H
#define SQLQUERTMODEL_H


#include <QObject>
#include <QString>
#include <QSqlQueryModel>
#include <QHash>
#include <QByteArray>

class SqlQuertModel : QSqlQueryModel
{
    Q_OBJECT
public:
    explicit SqlQuertModel();

    void setQuery(const QString &query, const QSqlDatabase &db = QSqlDatabase());
    void setQuery(const QSqlQuery &query);
    QVariant data(const QModelIndex &index, int role) const;
    QHash<int, QByteArray> roleNames() const {	return m_roleNames;	}
    void generateRoleNames();
    QHash<int, QByteArray> m_roleNames;

};

#endif // SQLQUERTMODEL_H
