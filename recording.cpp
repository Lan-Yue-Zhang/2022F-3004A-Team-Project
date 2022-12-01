#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>

//创建数据库
QSqlDatabase db = QSqlDatabase::addDatabase("QSQLIT", "teamwork");
db.setHostName("student");
db.setDatabaseName("recording");
if( !db.open())
{
   qinfo( "db.open failed.");
}


//创建表
db = QSqlDatabase::database("teamwork"); //建立数据库连接
QSqlQuery query(db);
query.exec("create table user(id int primary key, session int, intensity int)");
query.exec("create table record(id int primary key, uid int, session int, intensity int)");
query.exec('insert into people values(1, 20, 1)');
query.exec('insert into people values(2, 20, 1)');
//for test
query.exec('insert into people values(1, 1, 20,2)');
query.exec('insert into people values(1, 2, 40,2)');


