//
// Created by 김태경 on 2023/04/05.
//

#ifndef SINGLYLINKEDLIST_SONG_H
#define SINGLYLINKEDLIST_SONG_H
#include <string>

class Song {
public:
    std::string name;
    std::string artist;

    Song(std::string n, std::string a) : name(n), artist(a) {}

    bool equals(Song other) {
        return name == other.name &&
               artist == other.artist;
    }

    std::string toString() {
        return  name + " by " + artist;
    }

};
#endif //SINGLYLINKEDLIST_SONG_H
