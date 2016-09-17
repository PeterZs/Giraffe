/**
 *    > Author:   UncP
 *    > Mail:     770778010@qq.com
 *    > Github:	  https://www.github.com/UncP/Giraffe
 *    > Description:
 *
 *    > Created Time: 2016-09-17 16:44:01
**/

#ifndef _STRIPE_TEXTURE_HPP_
#define _STRIPE_TEXTURE_HPP_

#include "../core/texture.hpp"

namespace Giraffe {

class StripeTexture : public Texture
{
	public:
		StripeTexture(const Vector3d &color1, const Vector3d &color2, int axis,
									const double &factor = 1.0, bool emit = false, REFL refl = kDiffuse)
		:Texture(refl, emit), color1_(color1), color2_(color2), axis_(axis),
		 factor_(1.0 / factor) { }

		Vector3d evaluate(Vertex &) const override;

	private:
		Vector3d color1_;
		Vector3d color2_;
		int      axis_;
		double 	 factor_;
};

} // namepsace Giraffe

#endif /* _STRIPE_TEXTURE_HPP_ */