#include <glm/glm.hpp>
#include "Sample.h"

class Sampler{
	int width;
	int height;

	float l, r;
	float t, b;

	int iter;
	int max_iter;

	public:
		Sampler(int w, int h, float l, float r, float t, float b);
		virtual ~Sampler();

		Sample sampleNext();
		bool hasNext();

		void print();
};