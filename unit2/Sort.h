/*****************************************************************************
 *  Sort                                                                      *
 *  Copyright (C) 2014 Zerorlis     Zerorlis@163.com.                         *
 *                                                                            *
 *  这是一个插入算法的头文件                                                  *
 *                                                                            *
 *  This is a free code for the purpose of learning; you can redistribute it  *
 *  and/or modify it under the terms of the GNU General Public License        *
 *  version 3 as published by the Free Software Foundation.                   *
 *                                                                            *
 *  You should have received a copy of the GNU General Public License         *
 *  along with OST. If not, see <http://www.gnu.org/licenses/>.               *
 *                                                                            *
 *  Unless required by applicable law or agreed to in writing, software       *
 *  distributed under the License is distributed on an "AS IS" BASIS,         *
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  *
 *  See the License for the specific language governing permissions and       *
 *  limitations under the License.                                            *
 *                                                                            *
 *  @file     Sort.h                                                          *
 *  @brief    插入排序的算法                                                  *
 *  Details.                                                                  *
 *                                                                            *
 *  @author   Zerorlis                                                        *
 *  @email    renhuabest@163.com                                              *
 *  @version  1.0.0.1                                                         *
 *  @date     2018.11.30                                                      *
 *  @license  GNU General Public License (GPL)                                *
 *                                                                            *
 *----------------------------------------------------------------------------*
 *  Remark         : Description                                              *
 *----------------------------------------------------------------------------*
 *  Change History :                                                          *
 *  <Date>     | <Version> | <Author>       | <Description>                   *
 *----------------------------------------------------------------------------*
 *  2018/11/30 | 1.0.0.1   | Zerorlis       | Create file                     *
 *----------------------------------------------------------------------------*
 *                                                                            *
 *****************************************************************************/

// 上面的头文件是我复制的，用来写点备注啥的。。

/**
 * @brief 插入排序
 * @param list 函数列表
 * @param size 列表的大小
 *
 */
template <typename T>
void INSERTION_SORT(T* list, int size) {
    for (int i = 2; i < size; i++) {
        T key = list[i];
        int j = i - 1;
        while (j > 0 && list[j] > key) {
            list[j + 1] = list[j];
            j = j - 1;
        }
        list[j + 1] = key;
        return;
    }
}

