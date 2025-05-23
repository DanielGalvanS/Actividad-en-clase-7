#ifndef SUM_H
#define SUM_H

/*
 * Copyright (C) 2025 Tec de Monterrey
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include <math.h>
#include <stdexcept>
#include "operacion.h"

/**
  metodo para realizar sumas de dos numeros
 */

class Sum : public Operacion{
public:
    float calcular(float a, float b) override {
        return a + b;
    }
};

#endif