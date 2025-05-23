#ifndef SUB_H
#define SUB_H
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
  metodo para realizar restas de dos numeros
 */

class Sub : public Operacion {
public:
  float calcular(float a, float b) override {
    return a - b;
  }  
};

#endif
