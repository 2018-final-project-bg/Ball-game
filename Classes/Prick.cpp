#include "Prick.h"
#include "AppMacros.h"

Prick::Prick()
{

}

Prick::~Prick()
{

}

Prick * Prick::create(const std::string& filename)
{
	Prick * prick = new Prick();
	if (prick && prick->init(filename))
	{
		prick->autorelease();
		return prick;
	}
	CC_SAFE_DELETE(prick);
	return nullptr;
}

bool Prick::init(const std::string& filename)
{
	if (!Entity::initWithFile(filename))
	{
		return false;
	}

	_radius = PRICK_INITIAL_RADIUS;
	_score = PRICK_INITIAL_SCORE;

	Size size = this->getContentSize();
	float scale = (_radius * 2) / size.width;
	this->setScale(scale);

	return true;
}