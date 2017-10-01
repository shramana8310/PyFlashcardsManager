#ifndef FM_PROTO_DIALOG_H
#define FM_PROTO_DIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QListWidget>

class FMProtoDialog : public QDialog {
    Q_OBJECT
public:
    FMProtoDialog(QWidget* parent = Q_NULLPTR);

protected:
    virtual void closeEvent(QCloseEvent*) override;

private slots:
    void wordLineEditTextChanged(const QString&);
    void checkForExecution();
    void addWord();
    void addWordFromFile();
    void addDictionary();
    void removeSelectedDictionary();
    void upSelectedDictionary();
    void downSelectedDictionary();
    void dictionarySelectionChanged();
    void execute();

private:
    QListWidget* wordList;
    QLineEdit* wordLineEdit;
    QPushButton* addWordButton;
    QPushButton* addWordListFileButton;
    QPushButton* clearWordListButton;

    QListWidget* dictionaryList;
    QPushButton* addDictionaryButton;
    QPushButton* removeDictionaryButton;
    QPushButton* upDictionaryButton;
    QPushButton* downDictionaryButton;

    QPushButton* executeButton;
    QPushButton* closeButton;
};

#endif
