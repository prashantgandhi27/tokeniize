/*!*****************************************************************************
*  \author     Prashant Gandhi
*  \date       05/17/2024
********************************************************************************
*  \file       tokenize.h
*
*  \brief      This file declares tokenize API.
*
*  \details    Tokenize the input string based on the provided delimiter and
*              populates the provided char pointer array.
*
*  \note       VERSION - 0.1.0
*
*******************************************************************************/
#ifndef __PRASHANT_TOKENIZE_TOKENIZE_H__
#define __PRASHANT_TOKENIZE_TOKENIZE_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

/*!*****************************************************************************
*  \brief      Tokenize the input string based on the provided delimiter and
*              populates the provided char pointer array.
*
*  \param[in]       str          - String that needs to be tokenize.
*  \param[in, out]  argv         - Tokenized string.
*  \param[in]       c_max_tokens - Maximum number of tokens supported.
*  \param[in]       c_delimiter  - TODO
*
*  \retval Number of extracted tokens.
*
******************************************************************************/
uint16_t tokenize(char *str,
                  char *argv[],
                  uint16_t const c_max_tokens,
                  char const c_delimiter);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __PRASHANT_TOKENIZE_TOKENIZE_H__ */