#ifndef __ATTACH_H__
#define __ATTACH_H__

#include <QString>

class Record;

class Attach
{
public:
  Attach(int iType, Record *iParent);
  virtual ~Attach();

  // Возможные типы аттача - файл или линк на файл
  enum attachType{typeFile, typeLink};

  int getType() const;

  void setId(QString iId);
  QString getId() const;

  void setFileName(QString iFileName);
  QString getFileName() const;

  bool setLink(QString iLink);
  QString getLink() const;

  qint64 getFileSize() const;

protected:

  Record *parent;
  int     type; // Тип аттача (файл или линк на файл)

  QString id; // Идентификатор (служит так же техническим именем файла в базе, без расширения .bin)
  QString fileName; // Имя файла. Так файл отображается в интерфейсе, при экспорте назначается это имя
  QString link; // Линк на файл

};

#endif // __ATTACH_H__