//
// Question 1 code

#include "Track.h"

Track::Track(std::string title, int duration)
{
    this->title = title;
    this->duration = duration;
}

std::string Track::getTitle(void)
{
    return title;
}

int Track::getDuration(void)
{
    return duration;
}

void Track::setTitle(std::string title)
{
    this->title = title;
}

void Track::setDuration(int duration)
{
    this->duration = duration;
}

std::ostream &operator<<(std::ostream &os, const Track &track) {
    os << "title: " << track.title << " duration: " << track.duration;
    return os;
}
