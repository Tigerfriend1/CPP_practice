//
// Created by 김태경 on 2023/04/05.
//
#include "Playlist.h"
#include <iostream>
using namespace std;

void Playlist::addSong(std::string name, std::string artist) {
    Song *a=new Song(name,artist);

    this->songList->addNode(*a);
}

void Playlist::removeSong(Song song) {
    this->songList->removeNode(song);
}

void Playlist::printPlaylist() {
    cout<<"Playlist:"<<endl;
    this->songList->printList();
}

