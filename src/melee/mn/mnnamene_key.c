/* Phase 1: mnNameNew_KeySetup */
/* Calculates name index offset by multiplying by 5 */
int mnNameNew_KeySetup(int param_1) {
    int var_r0;
    int var_r3;
    var_r3 = (unsigned int)param_1 >> 31;
    var_r0 = param_1 + var_r3;
    var_r3 = var_r0 * 5;
    return var_r3;
}
