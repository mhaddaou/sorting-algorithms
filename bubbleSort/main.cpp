/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:32:21 by mhaddaou          #+#    #+#             */
/*   Updated: 2023/03/21 19:56:39 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

template <typename iter>
void bubbleSort(iter begin, iter end){
    bool swapped = true;
    for (; begin != end; ++begin){
        swapped = false;
        iter it1 = begin;
        for (iter it2 = begin; it2 != end; ++it2){
            if (*it1 > *it2){
                std::swap(*it1, *it2);
                swapped = true;
            }
        }
    }
}


int main (){
    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(4);
    lst.push_back(5);
    lst.push_back(1);
    lst.push_back(0);
    bubbleSort(lst.begin(), lst.end());
    for (std::list<int>::iterator it = lst.begin(); it != lst.end();it++){
        std::cout << *it << " ";
    }
}