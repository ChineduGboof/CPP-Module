/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:08:41 by gboof             #+#    #+#             */
/*   Updated: 2023/05/06 23:07:55 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>
#include <iostream>

struct Data;

class Serializer
{
    private: 
        Serializer();
        ~Serializer();
        Serializer(const Serializer & other);
        Serializer & operator=(const Serializer & other);
    public:
        static uintptr_t serialize(Data * ptr);
        static Data * deserialize(uintptr_t raw);
};

#endif

/*
  Putting the constructor, destructor and operator private makes the 
  class Serializer effectively a static class, because it cannot 
  be instantiated or copied. 
  To call the static methods of the class, we use 
  the scope resolution operator ::, like this:
  uintptr_t serializedData = Serializer::serialize(myDataPtr);
  Data* deserializedData = Serializer::deserialize(serializedData);
  
  The serializer and deserializer are functions that convert an object 
  or data structure into a format that can be transmitted or stored, 
  and then recreate the original object or data structure from the serialized format.
*/