/* ========================================================================
  @file fortemedia_isd.h

  Headers to declare the fortemedia isd module initialization functions.
  ========================================================================= */

/* =========================================================================
  Copyright (c) 2020-2021,2023 Qualcomm Technologies, Inc.
  All Rights Reserved.
  Confidential and Proprietary - Qualcomm Technologies, Inc.
  ========================================================================= */

/* =========================================================================
  Edit History

  when       who          what, where, why
  --------   -------     -------------------------------------------------
   ========================================================================
*/

/*------------------------------------------------------------------------
 * Include files and Macro definitions
 * -----------------------------------------------------------------------*/
#ifndef FORTEMEDIA_ISD_H
#define FORTEMEDIA_ISD_H

#include "capi.h"
#include "ar_defs.h"

/*------------------------------------------------------------------------
 * Function declarations
 * -----------------------------------------------------------------------*/

#ifdef __cplusplus
extern "C" {
#endif

/*
  This function is used to query the static properties to create the fortemedia_isd module

  param[in] init_set_prop_ptr: Pointer to the initializing property list
  param[in, out] static_prop_ptr: Pointer to the static property list

  return: CAPI_EOK(0) on success else failure error code
 */
capi_err_t fortemedia_isd_get_static_properties(const capi_proplist_t *init_set_properties, const capi_proplist_t *static_properties);

/*
  This is the first function called by the framework after allocating the capi handle.
  Module is expected to initialize the capi_t handle with the init properties set by
  the framework

  param[in] capi_ptr: Pointer to the CAPI lib.
  param[in] init_set_prop_ptr: Pointer to the property list that needs to be
            initialized

  return: CAPI_EOK(0) on success else failure error code
*/
capi_err_t fortemedia_isd_init(capi_t *_pif, const capi_proplist_t *init_set_properties);

#ifdef __cplusplus
}
#endif

#endif /* FORTEMEDIA_ISD_H */
