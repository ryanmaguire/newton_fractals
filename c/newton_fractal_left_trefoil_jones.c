/******************************************************************************
 *                                  LICENSE                                   *
 ******************************************************************************
 *  This file is part of newton_fractals.                                     *
 *                                                                            *
 *  newton_fractals is free software: you can redistribute it and/or          *
 *  modify it under the terms of the GNU General Public License as published  *
 *  by the Free Software Foundation, either version 3 of the License, or      *
 *  (at your option) any later version.                                       *
 *                                                                            *
 *  newton_fractals is distributed in the hope that it will be useful         *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of            *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
 *  GNU General Public License for more details.                              *
 *                                                                            *
 *  You should have received a copy of the GNU General Public License         *
 *  along with newton_fractals.  If not, see <https://www.gnu.org/licenses/>. *
 ******************************************************************************
 *  Purpose:                                                                  *
 *      Generates a Newton fractal for the left trefoil Jones polynomial.     *
 ******************************************************************************
 *  Author: Ryan Maguire                                                      *
 *  Date:   2023/05/06                                                        *
 ******************************************************************************/

/*  Functions for creating Newton fractals.                                   */
#include "nf.h"

/*  Routine for plotting the Newton fractal for the left trefoil knot.        */
int main(void)
{
    /*  The coefficients for the Jones polynomial.                            */
    double num_coeffs[4] = {-1.0, 1.0, 0.0, 1.0};
    double den_coeffs[5] = {0.0, 0.0, 0.0, 0.0, 1.0};

    /*  Name of the output PPM file.                                          */
    const char *name = "newton_fractal_left_trefoil_jones.ppm";

    /*  Create the Newton fractal.                                            */
    NF_REAL_RAT_NEWTON_FRACTAL(num_coeffs, den_coeffs, name);
    return 0;
}
/*  End of main.                                                              */
