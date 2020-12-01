//
// Created by jxesa on 27/11/2020.
//

#ifndef PRIMERSESIONESTRUCTURASDATOS_BOOK_H
#define PRIMERSESIONESTRUCTURASDATOS_BOOK_H
#include <string>
#include <ostream>

class Book {
private:
    std::string title;
    std::string author;
    int pages;
public:
    Book(const std::string &title, const std::string &author, int pages);

    const std::string &getTitle() const;

    void setTitle(const std::string &title);

    const std::string &getAuthor() const;

    void setAuthor(const std::string &author);

    int getPages() const;

    void setPages(int pages);

    friend std::ostream &operator<<(std::ostream &os, const Book &book);

    virtual ~Book();
};


#endif //PRIMERSESIONESTRUCTURASDATOS_BOOK_H

