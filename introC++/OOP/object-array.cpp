#include <iostream>
using namespace std;

class Song
{
private:
    string title;
    string album;
    string singer;

public:
    Song()
    {
        title = album = singer = "unknown";
    }

    void setTitle(string title)
    {
        this->title = title;
    }

    string getTitle()
    {
        return title;
    }

    void setAlbum(string album)
    {
        this->album = album;
    }

    string getAlbum()
    {
        return album;
    }

    void setSinger(string singer)
    {
        this->singer = singer;
    }

    string getSinger()
    {
        return singer;
    }

    void showData()
    {
        cout << "\n";
        cout << this->title << "\t";
        cout << this->album << "\t";
        cout << this->singer << "\n";
    }
};

int main()
{

    Song songs[3];
    string _title, _singer, _album;

    for (int i = 0; i < 3; i++)
    {
        cout << "\nEnter data for song " << (i + 1) << ": \n";
        cout << "Title: ";
        getline(cin, _title);

        cout << "\nAlbum Name: ";
        getline(cin, _album);

        cout << "\nSinger: ";
        getline(cin, _singer);

        songs[i].setAlbum(_album);
        songs[i].setSinger(_singer);
        songs[i].setTitle(_title);
    }

    cout << "\n----- song list -----\n";
    for (int i = 0; i < 3; i++)
    {
        songs[i].showData();
    }

    return 0;
}