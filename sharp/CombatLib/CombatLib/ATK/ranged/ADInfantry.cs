﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CombatLib
{
    public class ADInfantry : ADistant
    {
        public ADInfantry(int a, int s, int ap, int bs)
        {
            this.A = a;
            this.S = s;
            this.AP = ap;
            this.BS = bs;
        }
    }
}
