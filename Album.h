//

#ifndef SOLUTION_ALBUM_H
#define SOLUTION_ALBUM_H

#include <ostream>
#include "Track.h"

class Album
{
private:
    std::string title;
    std::string artist;
    std::string tracks[10];

public:
    Album();
    Album(std::string tracks[10]);
    Album(const Album &other);
    Album &operator=(const Album &other);
    friend std::ostream &operator<<(std::ostream &os, const Album &album);

    const std::string &getTitle() const;

    void setTitle(const std::string &title);

    const std::string &getArtist() const;

    void setArtist(const std::string &artist);

    const std::string *getTracks() const;

    void setTracks(const std::string tracks[10]);

};
#endif //SOLUTION_ALBUM_H
