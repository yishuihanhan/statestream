/*
-*- coding: utf-8 -*-
Copyright (c) 2017 - for information on the respective copyright owner
see the NOTICE file and/or the repository https://github.com/VolkerFischer/statestream

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/



/*
 * Some functions to enable hebbian and hebbian-like plasticities.
 */
void chebb_raw(float* src,
                float* tgt,
                float* upd,
                float* tgt_eps,
                int agents,
                int src_X,
                int src_Y,
                int src_C,
                int tgt_X,
                int tgt_Y,
                int tgt_C,
                int rf_X,
                int rf_Y,
                int dil_X,
                int dil_Y);

