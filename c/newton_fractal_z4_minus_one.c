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
 *      Generates a Newton fractal for p(z) = z^4 - 1.                        *
 ******************************************************************************
 *  Author: Ryan Maguire                                                      *
 *  Date:   2023/05/04                                                        *
 ******************************************************************************/

/*  Functions for creating Newton fractals.                                   */
#include "nf.h"

/*  Routine for plotting the Newton fractal for z^4 - 1.                      */
int main(void)
{
    /*  The coefficients for the polynomial p(z) = -1 + z^4.                  */
    double coeffs[5] = {-1.0, 0.0, 0.0, 0.0, 1.0};

    /*  Name of the output PPM file.                                          */
    const char *name = "newton_fractal_z4_minus_one.ppm";

    /*  Create the Newton fractal.                                            */
    NF_REAL_NEWTON_FRACTAL(coeffs, name);
    return 0;
}
/*  End of main.                                                              */
