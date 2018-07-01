#ifndef DATABASE_H
#define DATABASE_H
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVector>

class QWidget;
class QLineEdit;
class QComboBox;
class QPushButton;
class QLabel;
class QGridLayout;
class QTabWidget;
class QVBoxLayout;
class QHBoxLayout;
class QTreeWidget;
class QTreeWidgetItem;
class QGroupBox;
class QToolButton;
class QTableWidget;
class QCheckBox;
class QTableWidgetItem;
class QTimer;

class database : public QObject
{
    Q_OBJECT

private:

    enum{MANAGER,USER,VISITOR,USER_LOGIN,USER_REGISTER};
    QString current_user;

    int user_type;
    int current_page;
    int max_page;
    int current_page2;
    int max_page2;

    int user_current_page;
    int user_max_page;
    int user_num;

    int current_row_number;

    QTimer *timer;

    QTableWidget *tablewidget;
    QGridLayout *gridLayout ;
    QVBoxLayout *vboxLayout0;
    QVBoxLayout *vboxLayout1;
    QVBoxLayout *vboxLayout ;
    QWidget *titleImage;

    QVBoxLayout *vboxLayout3;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout1;
    QHBoxLayout *hboxLayout ;
    QHBoxLayout *hboxLayout2;
    QHBoxLayout *hboxLayout3;

    QLabel *spacelabel2;
    QLabel *spacelabel3;
    QGroupBox *groupbox;
    QGroupBox *groupbox1;
    QPushButton *clearbutton;
    QPushButton *searchbutton;
    QPushButton *registerbutton;
    QPushButton *loginbutton;
    QPushButton *quitloginbutton;
    QLabel *label;

    QTreeWidget *tree;
    QTreeWidgetItem *root;

    QLineEdit *nameLine;
    QLineEdit *publishLine;
    QLineEdit *priceLine;
    QLineEdit *priceLine1;
    QLineEdit *authorLine;
    QComboBox *dateBox;
    QComboBox *dateBox1;
    QComboBox *isLent;
    QWidget *window_main;

    QPushButton *nextbutton;
    QPushButton *lastbutton;

    QSqlDatabase db;
    QSqlQuery query;

    QTabWidget *mainTabWidget;
    QTabWidget *loginTabWidget;
    QWidget *user_loginWidget;
    QWidget *manager_loginWidget;

    QLineEdit *username1;
    QLineEdit *password1;
    QLineEdit *username2;
    QLineEdit *password2;

    QPushButton *okbutton;
    QVBoxLayout *vboxLayout4;
    QVBoxLayout *vboxLayout5;
    QVBoxLayout *vboxLayout6;
    QHBoxLayout *hboxLayout4;
    QHBoxLayout *hboxLayout5;
    QHBoxLayout *hboxLayout6;
    QGridLayout *gridLayout2;
    QTabWidget *manageTabWidget;
    QWidget *addBookWidget;
    QLabel *label2;
    QLabel *label_current_page;
    QLabel *label_max_page;

    QLineEdit *placeLine2;
    QLineEdit *book_id2;
    QLineEdit *nameLine2;
    QComboBox *typeBox2;
    QLineEdit *priceLine2;
    QLineEdit *authorLine2;
    QLineEdit *numLine2;
    QLineEdit *publishLine2;
    QComboBox *dateBox2;
    QComboBox *statusBOX2;


    QWidget *window_visitor;
    QWidget *window_manager;
    QWidget *window_usrlogin;
    QWidget *window_usrrigister;
    QWidget *window_loadbook;
    QWidget *window_finebook;
    QWidget *window_addbook;
    QWidget *window_mutiaddbook;
    QWidget *window_manage_usr;


//    QWidget *window;
    QWidget *window1;
//    QWidget *window2;
//    QWidget *window3;
//    QWidget *window4;
//    QWidget *window5;



    QWidget *registerWindow;
    QLabel *label3;
    QLineEdit *nameLine3;
    QLineEdit *nameLine4;
    QLineEdit *mailboxLine;
    QLineEdit *phoneLine;
    QLineEdit *passwordLine1;
    QLineEdit *passwordLine2;
    QPushButton *registerOkButton;
    QHBoxLayout *hboxLayout7;
    QHBoxLayout *hboxLayout8;
    QVBoxLayout *vboxLayout7;
    QGridLayout *gridLayout3;
    QLabel *label4;
    QVector<QString>result;

    QLabel *label5;
    QLineEdit *idLine;
    QVBoxLayout *vboxLayout9;
    QHBoxLayout *hboxLayout9;
    QWidget *deletebookWidget;
    QPushButton *deleteOkButton;

    QTableWidget *tablewidget1;
    QVBoxLayout *vboxLayout10;
    QHBoxLayout *hboxLayout10;
    QPushButton *deleteUserButton;
    QPushButton *grantLentButton;
    QPushButton *lastPageButton;
    QPushButton *nextPageButton;
    QPushButton *fine_usr_Button;
    QTableWidgetItem *item0[13];
    QTableWidgetItem *item1[13];
    QVector<QString*>userMessage;

    QTableWidgetItem *item2[10];
    QTableWidgetItem *item3[10];
    QPushButton *lendBookButton;

    QTableWidget *tablewidget2;
    QVector<QString*>loanMessage;
    QHBoxLayout *hboxLayout11;
    QVBoxLayout *vboxLayout11;
    QTableWidgetItem *item4[3];
    QPushButton *returnBookButton;
    QPushButton *lendbookagainButton;
    QPushButton *personinformationButton;

    QVector<QString*>FineMessage;
    QTableWidget *tablewidget_fine;
    QHBoxLayout *hboxLayout_fine;
    QVBoxLayout *vboxLayout_fine;
    QTableWidgetItem *item_fine[3];
    QPushButton *fineBookButton;



    QTableWidget *tablewidget3;
    QVBoxLayout *vboxLayout12;
    QHBoxLayout *hboxLayout12;
    QPushButton *addBookOkButton;
    QPushButton *addBookClearButton;

    QComboBox *bookType[13];
    QComboBox *publishDate[13];
    QComboBox *statusType[13];
    QString bookMessage[9];

    QLabel *label_current_page2;
    QLabel *label_max_page2;
    QLabel *tipLabel;
    QWidget *fileWindow;
    QHBoxLayout *hboxLayout13;
    QPushButton *loadFileButton;
    QVector<QString*>multiBookMessage;

    QWidget *fineBookWindow;
    QVBoxLayout *vboxLayout_manage_fine;
    QHBoxLayout *hboxLayout_manage_fine;
    QHBoxLayout *hboxLayout_manage_fine2;
    QPushButton *fineokbutton;
    QLineEdit *idLine_manage_fine;
    QLabel *label_manager_fine;

    QPushButton *changeUserDataButton;
    QWidget *changeDataWindow;
    QLineEdit *nameLine_changeData;
//    QLineEdit *nameLine4;
    QLineEdit *mailboxLine_changeData;
    QLineEdit *phoneLine_changeData;
//    QLineEdit *passwordLine1;
//    QLineEdit *passwordLine2;
    QPushButton *changeDataOkButton;
    QHBoxLayout *hboxLayout_changeData;
    QHBoxLayout *hboxLayout_changeData2;
    QVBoxLayout *vboxLayout_changeData;
    QGridLayout *gridLayout_changeData;
    QLabel *label_changeData;



//    QPushButton *changeUserDataButton;
    QWidget *informationDataWindow;
//    QLineEdit *nameLine_changeData;
//    QLineEdit *nameLine4;
//    QLineEdit *mailboxLine_changeData;
//    QLineEdit *phoneLine_changeData;
//    QLineEdit *passwordLine1;
//    QLineEdit *passwordLine2;
//    QPushButton *changeDataOkButton;
    QHBoxLayout *hboxLayout_informationData;
    QHBoxLayout *hboxLayout_informationData2;
    QVBoxLayout *vboxLayout_informationData;
    QGridLayout *gridLayout_informationData;
    QLabel *label_informationData;


    QPushButton *clearSearchUserButton;
    QPushButton *searchUserButton;
    QHBoxLayout *hboxLayoutSearchUser;
    QVBoxLayout *vboxLayoutSearchUser;
    QGridLayout *gridLayoutSearchUser;
    QLineEdit   *nameLineSearchUser;
    QLineEdit   *phoneLineSearchUser;
    QLineEdit   *mailLineSearchUser;
    QLineEdit   *fineSearchUser;
    QLineEdit   *fineSearchUser2;
    QComboBox   *loanstatusSearchUser;
    QComboBox   *lentBooknumber;
    QLabel      *labelSearchUser;
    QGroupBox   *groupBoxSearchUser;
    QGroupBox   *groupBoxSearchUser2;
    QLabel      *label_user_current_page;
    QLabel      *label_user_max_page;





    void setLayout();
    bool createConnection();

    void setWindowShowBook(int type);
    void setWindowSearchBook(int type);
    void setWindowAddBook();
    void setWindowUserManage();
    void setWindowLoanBook();

    //罚款窗口
    void setWindowFineBook();
    void setWindowMutiAddBook();
    void setWindowTitle();

    void updateManageWindow();
    void updateShowBookWindow();
    void updateLoanBookWindow();

    //更新罚款窗口
    void updateFineBookWindow();

    void updateTitle(int type);

    bool addBook();

    void loadUserMessage();
    void loadLoanMessage();

    //载入罚款信息
    void loadFineMessage();

    //用户登录时遍历所有用户更新罚款单
    void createFine();

    QWidget* createLoginWindow(int type);

public:

    database(QObject *parent = 0);
    ~database();

private slots:

    void searchBook();
    void printfFineMessage();
    void updateTime();
    void clear();
    void quitLogin();
    void returnBook();
    void fineBook();
    void managerLogin();
    void deleteLogin();
    void bookLastPage();
    void bookNextPage();
    void deleteBook();
    void searchBookByType(QTreeWidgetItem*,int);
    void userLogin();
    void setWindowRegister();
    void setWindowLogin();
    void Register();
    void deleteUser();
    void grantLent();
    void userNextPage();
    void userLastPage();
    void lendBook();
    void lendbookagain();
    void oneAddBook();
    void mutiAddBook();
    void clearAddBookMessage();
    void openFile();
    //实时获取当前时间
    void getDate();

    //建立管理员罚款窗口
    void setWindowManagerFineBook();

    //管理员添加书籍损坏
    void managerfineBook();

    //建立修改用户信息窗口
    void setWindowChangeData();

    //管理员修改信息
    void managerChangeData();

    //建立个人信息窗口
    void setWindowInformation();

    //搜索用户
    void searchUser();

    //清空搜索用户
    void clearsearchUser();
};

#endif // DATABASE_H

