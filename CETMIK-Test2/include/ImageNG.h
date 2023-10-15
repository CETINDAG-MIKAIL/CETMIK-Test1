#ifndef IMAGENG_H
#define IMAGENG_H

#include "Dimension.h"

class ImageNG
{
private:
    char* nom;
    int id;
    Dimension dimension;

public:
    
	ImageNG();
	ImageNG(int i, const char* n);
	ImageNG(int i, const char* n, const Dimension& d);
	ImageNG(const ImageNG & i);
	~ImageNG();
	void setId(int i); 
	void setNom(const char* n);
	int getId() const;
	const char* getNom() const ;  
	void Affiche() const;
    const Dimension& getDimension() const;
    void setDimension(const Dimension& d);
};

#endif
