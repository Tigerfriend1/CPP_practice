//
// Created by 김태경 on 2023/04/05.
//

#ifndef SINGLYLINKEDLIST_PLAYLIST_H
#define SINGLYLINKEDLIST_PLAYLIST_H
#include "SinglyLinkedList.h"

class Playlist {
public:
    Playlist() : songList(new SinglyLinkedList()) {}

    void addSong(std::string name, std::string artist);
    void removeSong(Song song);
    void printPlaylist();

private:
    SinglyLinkedList* songList;
};
#endif //SINGLYLINKEDLIST_PLAYLIST_H
