//

#include "Album.h"

const std::string &Album::getTitle() const {
    return title;
}

void Album::setTitle(const std::string &title) {
    Album::title = title;
}

const std::string &Album::getArtist() const {
    return artist;
}

void Album::setArtist(const std::string &artist) {
    Album::artist = artist;
}

const std::string *Album::getTracks() const {
    return tracks;
}

//void Album::setTracks(const std::string *tracks) {
//    Album::tracks = tracks;
//}

