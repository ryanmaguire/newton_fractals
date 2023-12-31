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
 *      Provides a basic typedef for Booleans without C99 features.           *
 ******************************************************************************
 *  Author: Ryan Maguire                                                      *
 *  Date:   2023/05/04                                                        *
 ******************************************************************************/

/*  Include guard to prevent including this file twice.                       */
#ifndef NF_BOOL_H
#define NF_BOOL_H

/*  The "enum" type is simple enough for our purposes. Typedef this to bool.  */
typedef enum nf_bool_def {nf_false = 0, nf_true = 1} nf_bool;

#endif
/*  End of include guard.                                                     */
