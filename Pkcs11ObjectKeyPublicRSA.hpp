/*
*  PKCS#11 library for .Net smart cards
*  Copyright (C) 2007-2009 Gemalto <support@gemalto.com>
*
*  This library is free software; you can redistribute it and/or
*  modify it under the terms of the GNU Lesser General Public
*  License as published by the Free Software Foundation; either
*  version 2.1 of the License, or (at your option) any later version.
*
*  This library is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
*  Lesser General Public License for more details.
*
*  You should have received a copy of the GNU Lesser General Public
*  License along with this library; if not, write to the Free Software
*  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*
*/


#ifndef __GEMALTO__OBJECT_KEY_PUBLICK_RSA__
#define __GEMALTO__OBJECT_KEY_PUBLICK_RSA__


#include <boost/shared_ptr.hpp>
#include "Pkcs11ObjectKeyPublic.hpp"


class Pkcs11ObjectKeyPublicRSA : public Pkcs11ObjectKeyPublic
{

public:

	boost::shared_ptr< Marshaller::u1Array > m_pModulus;
	
	CK_ULONG m_ulModulusBits;

	boost::shared_ptr< Marshaller::u1Array > m_pPublicExponent;


	Pkcs11ObjectKeyPublicRSA( );
    
    Pkcs11ObjectKeyPublicRSA( const Pkcs11ObjectKeyPublicRSA* );

    virtual ~Pkcs11ObjectKeyPublicRSA( ) { }


	virtual bool compare( const CK_ATTRIBUTE& );

	virtual void setAttribute( const CK_ATTRIBUTE&, const bool& );

	virtual void getAttribute( CK_ATTRIBUTE_PTR );

	virtual void serialize( std::vector< u1 >* );

	virtual void deserialize( std::vector< u1 >&, CK_ULONG_PTR );

    virtual void print( void );

};


#endif // __GEMALTO__OBJECT_KEY_PUBLICK_RSA__
